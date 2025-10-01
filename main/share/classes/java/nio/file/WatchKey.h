#ifndef _java_nio_file_WatchKey_h_
#define _java_nio_file_WatchKey_h_
//$ interface java.nio.file.WatchKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class Watchable;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export WatchKey : public ::java::lang::Object {
	$interface(WatchKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void cancel() {}
	virtual bool isValid() {return false;}
	virtual ::java::util::List* pollEvents() {return nullptr;}
	virtual bool reset() {return false;}
	virtual ::java::nio::file::Watchable* watchable() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_WatchKey_h_