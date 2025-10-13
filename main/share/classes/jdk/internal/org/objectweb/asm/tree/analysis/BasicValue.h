#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_BasicValue_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_BasicValue_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.BasicValue
//$ extends jdk.internal.org.objectweb.asm.tree.analysis.Value

#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>

#pragma push_macro("DOUBLE_VALUE")
#undef DOUBLE_VALUE
#pragma push_macro("FLOAT_VALUE")
#undef FLOAT_VALUE
#pragma push_macro("INT_VALUE")
#undef INT_VALUE
#pragma push_macro("LONG_VALUE")
#undef LONG_VALUE
#pragma push_macro("REFERENCE_VALUE")
#undef REFERENCE_VALUE
#pragma push_macro("RETURNADDRESS_VALUE")
#undef RETURNADDRESS_VALUE
#pragma push_macro("UNINITIALIZED_VALUE")
#undef UNINITIALIZED_VALUE

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

class BasicValue : public ::jdk::internal::org::objectweb::asm$::tree::analysis::Value {
	$class(BasicValue, 0, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value)
public:
	BasicValue();
	void init$(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual bool equals(Object$* value) override;
	virtual int32_t getSize() override;
	virtual ::jdk::internal::org::objectweb::asm$::Type* getType();
	virtual int32_t hashCode() override;
	virtual bool isReference();
	virtual $String* toString() override;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* UNINITIALIZED_VALUE;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* INT_VALUE;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* FLOAT_VALUE;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* LONG_VALUE;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* DOUBLE_VALUE;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* REFERENCE_VALUE;
	static ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* RETURNADDRESS_VALUE;
	::jdk::internal::org::objectweb::asm$::Type* type = nullptr;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("DOUBLE_VALUE")
#pragma pop_macro("FLOAT_VALUE")
#pragma pop_macro("INT_VALUE")
#pragma pop_macro("LONG_VALUE")
#pragma pop_macro("REFERENCE_VALUE")
#pragma pop_macro("RETURNADDRESS_VALUE")
#pragma pop_macro("UNINITIALIZED_VALUE")

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_BasicValue_h_