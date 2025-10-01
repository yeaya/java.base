#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_SimpleVerifier_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_SimpleVerifier_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.SimpleVerifier
//$ extends jdk.internal.org.objectweb.asm.tree.analysis.BasicVerifier

#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicVerifier.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
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
					class Type;
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
					namespace tree {
						namespace analysis {
							class BasicValue;
							class Value;
						}
					}
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
					namespace tree {
						namespace analysis {

class SimpleVerifier : public ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicVerifier {
	$class(SimpleVerifier, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicVerifier)
public:
	SimpleVerifier();
	void init$();
	void init$(::jdk::internal::org::objectweb::asm$::Type* currentClass, ::jdk::internal::org::objectweb::asm$::Type* currentSuperClass, bool isInterface);
	void init$(::jdk::internal::org::objectweb::asm$::Type* currentClass, ::jdk::internal::org::objectweb::asm$::Type* currentSuperClass, ::java::util::List* currentClassInterfaces, bool isInterface);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::Type* currentClass, ::jdk::internal::org::objectweb::asm$::Type* currentSuperClass, ::java::util::List* currentClassInterfaces, bool isInterface);
	virtual $Class* getClass(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* getElementValue(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* objectArrayValue) override;
	virtual ::jdk::internal::org::objectweb::asm$::Type* getSuperClass(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual bool isArrayValue(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value) override;
	virtual bool isAssignableFrom(::jdk::internal::org::objectweb::asm$::Type* type1, ::jdk::internal::org::objectweb::asm$::Type* type2);
	virtual bool isInterface(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual bool isSubTypeOf(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* expected) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value2) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) override;
	::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* newArrayValue(::jdk::internal::org::objectweb::asm$::Type* type, int32_t dimensions);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newValue(::jdk::internal::org::objectweb::asm$::Type* type) override;
	virtual void setClassLoader(::java::lang::ClassLoader* loader);
	::jdk::internal::org::objectweb::asm$::Type* currentClass = nullptr;
	::jdk::internal::org::objectweb::asm$::Type* currentSuperClass = nullptr;
	::java::util::List* currentClassInterfaces = nullptr;
	bool isInterface$ = false;
	::java::lang::ClassLoader* loader = nullptr;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_SimpleVerifier_h_