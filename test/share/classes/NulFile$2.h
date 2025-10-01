#ifndef _NulFile$2_h_
#define _NulFile$2_h_
//$ class NulFile$2
//$ extends java.io.FileFilter

#include <java/io/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class NulFile$2 : public ::java::io::FileFilter {
	$class(NulFile$2, $NO_CLASS_INIT, ::java::io::FileFilter)
public:
	NulFile$2();
	void init$();
	virtual bool accept(::java::io::File* file) override;
};

#endif // _NulFile$2_h_