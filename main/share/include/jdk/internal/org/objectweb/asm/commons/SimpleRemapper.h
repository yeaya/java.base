#ifndef _jdk_internal_org_objectweb_asm$_commons_SimpleRemapper_h_
#define _jdk_internal_org_objectweb_asm$_commons_SimpleRemapper_h_
//$ class jdk.internal.org.objectweb.asm.commons.SimpleRemapper
//$ extends jdk.internal.org.objectweb.asm.commons.Remapper

#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

class $import SimpleRemapper : public ::jdk::internal::org::objectweb::asm$::commons::Remapper {
	$class(SimpleRemapper, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::commons::Remapper)
public:
	SimpleRemapper();
	void init$(::java::util::Map* mapping);
	void init$($String* oldName, $String* newName);
	virtual $String* map($String* key) override;
	virtual $String* mapFieldName($String* owner, $String* name, $String* descriptor) override;
	virtual $String* mapInvokeDynamicMethodName($String* name, $String* descriptor) override;
	virtual $String* mapMethodName($String* owner, $String* name, $String* descriptor) override;
	::java::util::Map* mapping = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_SimpleRemapper_h_