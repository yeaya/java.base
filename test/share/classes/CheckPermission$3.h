#ifndef _CheckPermission$3_h_
#define _CheckPermission$3_h_
//$ class CheckPermission$3
//$ extends java.io.FileFilter

#include <java/io/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class CheckPermission$3 : public ::java::io::FileFilter {
	$class(CheckPermission$3, $NO_CLASS_INIT, ::java::io::FileFilter)
public:
	CheckPermission$3();
	void init$();
	virtual bool accept(::java::io::File* file) override;
};

#endif // _CheckPermission$3_h_