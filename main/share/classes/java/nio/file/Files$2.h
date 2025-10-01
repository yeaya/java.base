#ifndef _java_nio_file_Files$2_h_
#define _java_nio_file_Files$2_h_
//$ class java.nio.file.Files$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {

class Files$2 : public ::java::util::Iterator {
	$class(Files$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Files$2();
	void init$(::java::util::Iterator* val$delegate);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::Iterator* val$delegate = nullptr;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Files$2_h_