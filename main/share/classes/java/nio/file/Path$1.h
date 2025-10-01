#ifndef _java_nio_file_Path$1_h_
#define _java_nio_file_Path$1_h_
//$ class java.nio.file.Path$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class Path$1 : public ::java::util::Iterator {
	$class(Path$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Path$1();
	void init$(::java::nio::file::Path* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::nio::file::Path* this$0 = nullptr;
	int32_t i = 0;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Path$1_h_