#ifndef _jdk_internal_org_objectweb_asm$_commons_SerialVersionUIDAdder_h_
#define _jdk_internal_org_objectweb_asm$_commons_SerialVersionUIDAdder_h_
//$ class jdk.internal.org.objectweb.asm.commons.SerialVersionUIDAdder
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

#pragma push_macro("CLINIT")
#undef CLINIT

namespace java {
	namespace io {
		class DataOutput;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class FieldVisitor;
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

class $export SerialVersionUIDAdder : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(SerialVersionUIDAdder, 0, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	SerialVersionUIDAdder();
	void init$(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void addSVUID(int64_t svuid);
	virtual $bytes* computeSHAdigest($bytes* value);
	virtual int64_t computeSVUID();
	virtual bool hasSVUID();
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* desc, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* innerClassName, $String* outerName, $String* innerName, int32_t innerClassAccess) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	static void writeItems(::java::util::Collection* itemCollection, ::java::io::DataOutput* dataOutputStream, bool dotted);
	static $String* CLINIT;
	bool computeSvuid = false;
	bool hasSvuid = false;
	int32_t access = 0;
	$String* name = nullptr;
	$StringArray* interfaces = nullptr;
	::java::util::Collection* svuidFields = nullptr;
	bool hasStaticInitializer = false;
	::java::util::Collection* svuidConstructors = nullptr;
	::java::util::Collection* svuidMethods = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("CLINIT")

#endif // _jdk_internal_org_objectweb_asm$_commons_SerialVersionUIDAdder_h_