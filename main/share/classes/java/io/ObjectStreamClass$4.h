#ifndef _java_io_ObjectStreamClass$4_h_
#define _java_io_ObjectStreamClass$4_h_
//$ class java.io.ObjectStreamClass$4
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace io {
		class ObjectStreamClass$MemberSignature;
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$4 : public ::java::util::Comparator {
	$class(ObjectStreamClass$4, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ObjectStreamClass$4();
	void init$();
	virtual int32_t compare(::java::io::ObjectStreamClass$MemberSignature* ms1, ::java::io::ObjectStreamClass$MemberSignature* ms2);
	virtual int32_t compare(Object$* ms1, Object$* ms2) override;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$4_h_