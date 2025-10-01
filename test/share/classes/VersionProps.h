#ifndef _VersionProps_h_
#define _VersionProps_h_
//$ class VersionProps
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

class $export VersionProps : public ::java::lang::Object {
	$class(VersionProps, 0, ::java::lang::Object)
public:
	VersionProps();
	void init$();
	static void main($StringArray* args);
	static $StringArray* validVersions;
	static $Array<::java::util::List>* validLists;
	static $StringArray* invalidVersions;
};

#endif // _VersionProps_h_