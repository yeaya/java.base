#ifndef _java_util_PropertyPermissionCollection$1_h_
#define _java_util_PropertyPermissionCollection$1_h_
//$ class java.util.PropertyPermissionCollection$1
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace util {
		class PropertyPermission;
		class PropertyPermissionCollection;
	}
}

namespace java {
	namespace util {

class PropertyPermissionCollection$1 : public ::java::util::function::BiFunction {
	$class(PropertyPermissionCollection$1, $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	PropertyPermissionCollection$1();
	void init$(::java::util::PropertyPermissionCollection* this$0, $String* val$propName);
	virtual ::java::util::PropertyPermission* apply(::java::util::PropertyPermission* existingVal, ::java::util::PropertyPermission* newVal);
	virtual $Object* apply(Object$* existingVal, Object$* newVal) override;
	::java::util::PropertyPermissionCollection* this$0 = nullptr;
	$String* val$propName = nullptr;
};

	} // util
} // java

#endif // _java_util_PropertyPermissionCollection$1_h_