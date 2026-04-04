#include <sun/security/ssl/DTLSInputRecord$HoleDescriptor.h>
#include <sun/security/ssl/DTLSInputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

void DTLSInputRecord$HoleDescriptor::init$(int32_t offset, int32_t limit) {
	this->offset = offset;
	this->limit = limit;
}

DTLSInputRecord$HoleDescriptor::DTLSInputRecord$HoleDescriptor() {
}

$Class* DTLSInputRecord$HoleDescriptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offset", "I", nullptr, 0, $field(DTLSInputRecord$HoleDescriptor, offset)},
		{"limit", "I", nullptr, 0, $field(DTLSInputRecord$HoleDescriptor, limit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(DTLSInputRecord$HoleDescriptor, init$, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DTLSInputRecord$HoleDescriptor", "sun.security.ssl.DTLSInputRecord", "HoleDescriptor", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.DTLSInputRecord$HoleDescriptor",
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
		"sun.security.ssl.DTLSInputRecord"
	};
	$loadClass(DTLSInputRecord$HoleDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTLSInputRecord$HoleDescriptor);
	});
	return class$;
}

$Class* DTLSInputRecord$HoleDescriptor::class$ = nullptr;

		} // ssl
	} // security
} // sun