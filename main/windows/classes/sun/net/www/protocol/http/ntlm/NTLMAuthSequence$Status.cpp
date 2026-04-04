#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence$Status.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

void NTLMAuthSequence$Status::init$() {
}

NTLMAuthSequence$Status::NTLMAuthSequence$Status() {
}

$Class* NTLMAuthSequence$Status::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sequenceComplete", "Z", nullptr, 0, $field(NTLMAuthSequence$Status, sequenceComplete)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NTLMAuthSequence$Status, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status", "sun.net.www.protocol.http.ntlm.NTLMAuthSequence", "Status", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.ntlm.NTLMAuthSequence"
	};
	$loadClass(NTLMAuthSequence$Status, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NTLMAuthSequence$Status);
	});
	return class$;
}

$Class* NTLMAuthSequence$Status::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun