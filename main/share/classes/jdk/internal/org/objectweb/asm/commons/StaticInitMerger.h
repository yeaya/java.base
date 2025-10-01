#ifndef _jdk_internal_org_objectweb_asm$_commons_StaticInitMerger_h_
#define _jdk_internal_org_objectweb_asm$_commons_StaticInitMerger_h_
//$ class jdk.internal.org.objectweb.asm.commons.StaticInitMerger
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class MethodVisitor;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

class $export StaticInitMerger : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(StaticInitMerger, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	StaticInitMerger();
	void init$($String* prefix, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	void init$(int32_t api, $String* prefix, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	$String* owner = nullptr;
	$String* renamedClinitMethodPrefix = nullptr;
	int32_t numClinitMethods = 0;
	::jdk::internal::org::objectweb::asm$::MethodVisitor* mergedClinitVisitor = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_StaticInitMerger_h_