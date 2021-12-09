<%@ page language="java" contentType="text/html; charset=EUC-KR"
	pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
<style type="text/css">
	<%
	out.println( ".aa {width: 800px; background-color: blue; color: white}" );
	%>
</style>
</head>
<body>
	<div class="aa">div 태그 내용</div>
	<%
	out.println("aaa");
	System.out.println("aaa");
	%>
</body>
</html>