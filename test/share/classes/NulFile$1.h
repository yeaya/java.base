#ifndef _NulFile$1_h_
#define _NulFile$1_h_
//$ class NulFile$1
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class NulFile$1 : public ::java::io::FilenameFilter {
	$class(NulFile$1, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	NulFile$1();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

#endif // _NulFile$1_h_