#ifndef _java_util_CollSer_h_
#define _java_util_CollSer_h_
//$ class java.util.CollSer
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("IMM_MAP")
#undef IMM_MAP
#pragma push_macro("IMM_LIST_NULLS")
#undef IMM_LIST_NULLS
#pragma push_macro("IMM_SET")
#undef IMM_SET
#pragma push_macro("IMM_LIST")
#undef IMM_LIST

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}

namespace java {
	namespace util {

class CollSer : public ::java::io::Serializable {
	$class(CollSer, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CollSer();
	void init$(int32_t t, $ObjectArray* a);
	void readObject(::java::io::ObjectInputStream* ois);
	$Object* readResolve();
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x578EABB63A1BA811;
	static const int32_t IMM_LIST = 1;
	static const int32_t IMM_SET = 2;
	static const int32_t IMM_MAP = 3;
	static const int32_t IMM_LIST_NULLS = 4;
	int32_t tag = 0;
	$ObjectArray* array = nullptr;
};

	} // util
} // java

#pragma pop_macro("IMM_MAP")
#pragma pop_macro("IMM_LIST_NULLS")
#pragma pop_macro("IMM_SET")
#pragma pop_macro("IMM_LIST")

#endif // _java_util_CollSer_h_