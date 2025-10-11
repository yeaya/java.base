#ifndef _PipelineTest_h_
#define _PipelineTest_h_
//$ class PipelineTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("THROWS")
#undef THROWS

class PipelineTest$Fun;
namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Process;
		class ProcessBuilder;
		class ProcessHandle;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export PipelineTest : public ::java::lang::Object {
	$class(PipelineTest, 0, ::java::lang::Object)
public:
	PipelineTest();
	void init$();
	static void THROWS($Class* k, $Array<PipelineTest$Fun>* fs);
	static ::java::util::List* asList($ObjectArray* args);
	static void check(bool cond);
	static void check(bool cond, $String* m);
	static void equal(Object$* x, Object$* y);
	static void fail();
	static void fail($String* msg);
	static $String* fileContents(::java::io::File* file);
	static void lambda$t4_failStartPipeline$0(::java::io::File* p1err);
	static void lambda$t4_failStartPipeline$1(::java::io::File* p2out);
	static void lambda$t4_failStartPipeline$2();
	static void lambda$t4_failStartPipeline$3();
	static void lambda$t4_failStartPipeline$4();
	static bool lambda$t4_failStartPipeline$5(::java::lang::ProcessHandle* p);
	static void lambda$t4_failStartPipeline$6(::java::lang::ProcessHandle* p);
	static void lambda$waitForAll$7(::java::lang::Process* p);
	static void main($StringArray* args);
	static void pass();
	static void print(::java::lang::ProcessBuilder* pb);
	static void print(::java::lang::ProcessHandle* p);
	static void realMain($StringArray* args);
	static void setFileContents(::java::io::File* file, $String* contents);
	static void t1_simplePipeline();
	static void t2_translatePipeline();
	static void t3_redirectErrorStream();
	static void t4_failStartPipeline();
	static void unexpected($Throwable* t);
	static void verify($String* input, $String* expected, ::java::util::List* builders);
	static void verifyNullStream(::java::io::OutputStream* s, $String* msg);
	static void verifyNullStream(::java::io::InputStream* s, $String* msg);
	static void verifyProcesses(::java::util::List* processes);
	static void waitForAll(::java::util::List* processes);
	static $volatile(int32_t) passed;
	static $volatile(int32_t) failed;
};

#pragma pop_macro("THROWS")

#endif // _PipelineTest_h_