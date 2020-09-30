ANTLR4=java -Xmx500M -cp "/usr/local/lib/antlr-4.8-complete.jar:$CLASSPATH" org.antlr.v4.Tool

antlr:	calc.g4
		$(ANTLR4) -Dlanguage=Cpp -no-listener -visitor calc.g4

clean:	
		rm -f *.java *.class *.tokens *.interp	

#g++ main.cpp -o test -I/usr/local/include/antlr4-runtime -lantlr4-runtime
