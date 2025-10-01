#ifndef _CheckPermission$2_h_
#define _CheckPermission$2_h_
//$ class CheckPermission$2
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class CheckPermission$2 : public ::java::io::FilenameFilter {
	$class(CheckPermission$2, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	CheckPermission$2();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

#endif // _CheckPermission$2_h_