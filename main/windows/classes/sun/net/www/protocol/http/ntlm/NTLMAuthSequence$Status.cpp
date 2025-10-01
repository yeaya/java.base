#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence$Status.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NTLMAuthSequence = ::sun::net::www::protocol::http::ntlm::NTLMAuthSequence;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$FieldInfo _NTLMAuthSequence$Status_FieldInfo_[] = {
	{"sequenceComplete", "Z", nullptr, 0, $field(NTLMAuthSequence$Status, sequenceComplete)},
	{}
};

$MethodInfo _NTLMAuthSequence$Status_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NTLMAuthSequence$Status::*)()>(&NTLMAuthSequence$Status::init$))},
	{}
};

$InnerClassInfo _NTLMAuthSequence$Status_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status", "sun.net.www.protocol.http.ntlm.NTLMAuthSequence", "Status", $STATIC},
	{}
};

$ClassInfo _NTLMAuthSequence$Status_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status",
	"java.lang.Object",
	nullptr,
	_NTLMAuthSequence$Status_FieldInfo_,
	_NTLMAuthSequence$Status_MethodInfo_,
	nullptr,
	nullptr,
	_NTLMAuthSequence$Status_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthSequence"
};

$Object* allocate$NTLMAuthSequence$Status($Class* clazz) {
	return $of($alloc(NTLMAuthSequence$Status));
}

void NTLMAuthSequence$Status::init$() {
}

NTLMAuthSequence$Status::NTLMAuthSequence$Status() {
}

$Class* NTLMAuthSequence$Status::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthSequence$Status, name, initialize, &_NTLMAuthSequence$Status_ClassInfo_, allocate$NTLMAuthSequence$Status);
	return class$;
}

$Class* NTLMAuthSequence$Status::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun