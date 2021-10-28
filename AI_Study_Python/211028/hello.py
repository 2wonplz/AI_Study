from flask import Flask, render_template

app = Flask(__name__)


@app.route("/")
def index():
    return "index"


@app.route("/hello/<p1>")
def hello(p1):
    return render_template("a.html", p1=p1)


@app.route("/bye/<int:p2>")
def bye(p2):
    result = ""
    for i in range(1, p2):
        result += str(i) + "*" + str(i) + "=" + str(int(i) * int(i))
    print("result =", result)
    return render_template("b.html", p2=result)


if __name__ == '__main__':
    app.run(debug=True)
