#ifndef _jdk_internal_perf_Perf$GetPerfAction_h_
#define _jdk_internal_perf_Perf$GetPerfAction_h_
//$ class jdk.internal.perf.Perf$GetPerfAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace perf {

class $import Perf$GetPerfAction : public ::java::security::PrivilegedAction {
	$class(Perf$GetPerfAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Perf$GetPerfAction();
	void init$();
	virtual $Object* run() override;
};

		} // perf
	} // internal
} // jdk

#endif // _jdk_internal_perf_Perf$GetPerfAction_h_