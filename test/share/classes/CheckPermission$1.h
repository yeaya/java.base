#ifndef _CheckPermission$1_h_
#define _CheckPermission$1_h_
//$ class CheckPermission$1
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class CheckPermission$1 : public ::java::io::FilenameFilter {
	$class(CheckPermission$1, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	CheckPermission$1();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

#endif // _CheckPermission$1_h_