#ifndef _java_nio_file_CopyMoveHelper$CopyOptions_h_
#define _java_nio_file_CopyMoveHelper$CopyOptions_h_
//$ class java.nio.file.CopyMoveHelper$CopyOptions
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class CopyMoveHelper$CopyOptions : public ::java::lang::Object {
	$class(CopyMoveHelper$CopyOptions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CopyMoveHelper$CopyOptions();
	void init$();
	static ::java::nio::file::CopyMoveHelper$CopyOptions* parse($Array<::java::nio::file::CopyOption>* options);
	bool replaceExisting = false;
	bool copyAttributes = false;
	bool followLinks = false;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_CopyMoveHelper$CopyOptions_h_