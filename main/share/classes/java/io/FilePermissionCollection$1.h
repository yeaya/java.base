#ifndef _java_io_FilePermissionCollection$1_h_
#define _java_io_FilePermissionCollection$1_h_
//$ class java.io.FilePermissionCollection$1
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace io {
		class FilePermissionCollection;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}

namespace java {
	namespace io {

class FilePermissionCollection$1 : public ::java::util::function::BiFunction {
	$class(FilePermissionCollection$1, $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	FilePermissionCollection$1();
	void init$(::java::io::FilePermissionCollection* this$0);
	virtual ::java::security::Permission* apply(::java::security::Permission* existingVal, ::java::security::Permission* newVal);
	virtual $Object* apply(Object$* existingVal, Object$* newVal) override;
	::java::io::FilePermissionCollection* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_FilePermissionCollection$1_h_