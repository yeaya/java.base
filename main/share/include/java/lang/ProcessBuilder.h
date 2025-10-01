#ifndef _java_lang_ProcessBuilder_h_
#define _java_lang_ProcessBuilder_h_
//$ class java.lang.ProcessBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Process;
		class ProcessBuilder$Redirect;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace lang {

class $import ProcessBuilder : public ::java::lang::Object {
	$class(ProcessBuilder, 0, ::java::lang::Object)
public:
	ProcessBuilder();
	void init$(::java::util::List* command);
	void init$($StringArray* command);
	::java::lang::ProcessBuilder* command(::java::util::List* command);
	::java::lang::ProcessBuilder* command($StringArray* command);
	::java::util::List* command();
	::java::io::File* directory();
	::java::lang::ProcessBuilder* directory(::java::io::File* directory);
	::java::util::Map* environment();
	::java::lang::ProcessBuilder* environment($StringArray* envp);
	::java::lang::ProcessBuilder* inheritIO();
	static void lambda$startPipeline$0(::java::lang::Process* p);
	::java::lang::ProcessBuilder* redirectError(::java::lang::ProcessBuilder$Redirect* destination);
	::java::lang::ProcessBuilder* redirectError(::java::io::File* file);
	::java::lang::ProcessBuilder$Redirect* redirectError();
	bool redirectErrorStream();
	::java::lang::ProcessBuilder* redirectErrorStream(bool redirectErrorStream);
	::java::lang::ProcessBuilder* redirectInput(::java::lang::ProcessBuilder$Redirect* source);
	::java::lang::ProcessBuilder* redirectInput(::java::io::File* file);
	::java::lang::ProcessBuilder$Redirect* redirectInput();
	::java::lang::ProcessBuilder* redirectOutput(::java::lang::ProcessBuilder$Redirect* destination);
	::java::lang::ProcessBuilder* redirectOutput(::java::io::File* file);
	::java::lang::ProcessBuilder$Redirect* redirectOutput();
	$Array<::java::lang::ProcessBuilder$Redirect>* redirects();
	::java::lang::Process* start();
	::java::lang::Process* start($Array<::java::lang::ProcessBuilder$Redirect>* redirects);
	static ::java::util::List* startPipeline(::java::util::List* builders);
	static bool $assertionsDisabled;
	::java::util::List* command$ = nullptr;
	::java::io::File* directory$ = nullptr;
	::java::util::Map* environment$ = nullptr;
	bool redirectErrorStream$ = false;
	$Array<::java::lang::ProcessBuilder$Redirect>* redirects$ = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessBuilder_h_