using Oracle.ManagedDataAccess.Client;
using System.Collections.Generic;
using System.Data;
using System.Windows.Forms;

namespace StudyForProject
{
    public partial class Form1 : Form
    {
        const string ORADB = "Data Source=(DESCRIPTION=(ADDRESS_LIST=" +
               "(ADDRESS=(PROTOCOL=TCP)(HOST=localhost)(PORT=1521)))" +
               "(CONNECT_DATA=(SERVER=DEDICATED)(SERVICE_NAME=XE)));" +
               "User Id=c##scott;Password=tiger;";
        public static OracleConnection OraConn = new OracleConnection();

        OracleCommand cmd = new OracleCommand();
        public static DataSet ds;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, System.EventArgs e)
        {
            // 오라클 연결부분
            try
            {
                OraConn = new OracleConnection(ORADB);
                OraConn.Open();  // 오라클 실행
                cmd = new OracleCommand();  // 커맨드라인 저장할 객체 생성
            }
            catch (System.Exception ex)
            {
                throw;
            }

            //쿼리문
            string sql = "select * from myoracletest";  // 문자열안에 세미콜론 x
            OracleDataAdapter oda = new OracleDataAdapter();
            oda.SelectCommand = new OracleCommand();
            oda.SelectCommand.Connection = OraConn;
            oda.SelectCommand.CommandText = sql;

            ds = new DataSet();  // 데이터를 저장하는 DataSet 객체 생성
            oda.Fill(ds, "myoracletest");  // DataSet에 쿼리 결과물을 저장

            // 결과를 List에 저장
            List<mytest> tests = new List<mytest>();
            // 테이블에 있는 데이터만큼 foreach문을 수행
            foreach (DataRow item in ds.Tables[0].Rows)
            {
                mytest myTest = new mytest();
                myTest.name = item["Name"].ToString();
                myTest.id = int.Parse(item["Id"].ToString());
                tests.Add(myTest);
            }

            // List에 있는 걸 datagridview로 옮김
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = tests;
            // db 연결 닫기
            OraConn.Close();
        }
    }
}
