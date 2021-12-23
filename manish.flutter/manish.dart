import 'package:flutter/material.dart';
 
void main() => runApp(MyApp());
 
class MyApp extends StatelessWidget {
   // root widget of your application.
   @override
   Widget build(BuildContext context) {
      return MaterialApp(
         title: 'Hello World Application',
         theme: ThemeData(
            primarySwatch: Colors.blue,
         ),
         home: MyHomePage(title: 'Home page'),
      );
   }
}
class MyHomePage extends StatelessWidget {
   MyHomePage({Key key, this.title}) : super(key: key);
   final String title;
 
   @override
   Widget build(BuildContext context) {
      return Scaffold(
         appBar: AppBar(
            title: Text(this.title),
         ), 
         body: Center(
            child:
            Text(
               'Hello World',
            )
         ),
      );
   }
}