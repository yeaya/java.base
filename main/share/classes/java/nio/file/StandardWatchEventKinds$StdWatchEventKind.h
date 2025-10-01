#ifndef _java_nio_file_StandardWatchEventKinds$StdWatchEventKind_h_
#define _java_nio_file_StandardWatchEventKinds$StdWatchEventKind_h_
//$ class java.nio.file.StandardWatchEventKinds$StdWatchEventKind
//$ extends java.nio.file.WatchEvent$Kind

#include <java/nio/file/WatchEvent$Kind.h>

namespace java {
	namespace nio {
		namespace file {

class StandardWatchEventKinds$StdWatchEventKind : public ::java::nio::file::WatchEvent$Kind {
	$class(StandardWatchEventKinds$StdWatchEventKind, $NO_CLASS_INIT, ::java::nio::file::WatchEvent$Kind)
public:
	StandardWatchEventKinds$StdWatchEventKind();
	void init$($String* name, $Class* type);
	virtual $String* name() override;
	virtual $String* toString() override;
	virtual $Class* type() override;
	$String* name$ = nullptr;
	$Class* type$ = nullptr;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_StandardWatchEventKinds$StdWatchEventKind_h_