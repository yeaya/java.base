#ifndef _jdk_internal_org_objectweb_asm$_tree_Util_h_
#define _jdk_internal_org_objectweb_asm$_tree_Util_h_
//$ class jdk.internal.org.objectweb.asm.tree.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

class Util : public ::java::lang::Object {
	$class(Util, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Util();
	void init$();
	static ::java::util::List* add(::java::util::List* list, Object$* element);
	static ::java::util::List* asArrayList(int32_t length);
	static ::java::util::List* asArrayList($ObjectArray* array);
	static ::java::util::List* asArrayList($bytes* byteArray);
	static ::java::util::List* asArrayList($booleans* booleanArray);
	static ::java::util::List* asArrayList($shorts* shortArray);
	static ::java::util::List* asArrayList($chars* charArray);
	static ::java::util::List* asArrayList($ints* intArray);
	static ::java::util::List* asArrayList($floats* floatArray);
	static ::java::util::List* asArrayList($longs* longArray);
	static ::java::util::List* asArrayList($doubles* doubleArray);
	static ::java::util::List* asArrayList(int32_t length, $ObjectArray* array);
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_Util_h_