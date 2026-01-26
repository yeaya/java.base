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

$FieldInfo _DTLSInputRecord$HoleDescriptor_FieldInfo_[] = {
	{"offset", "I", nullptr, 0, $field(DTLSInputRecord$HoleDescriptor, offset)},
	{"limit", "I", nullptr, 0, $field(DTLSInputRecord$HoleDescriptor, limit)},
	{}
};

$MethodInfo _DTLSInputRecord$HoleDescriptor_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(DTLSInputRecord$HoleDescriptor, init$, void, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTLSInputRecord$HoleDescriptor_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSInputRecord$HoleDescriptor", "sun.security.ssl.DTLSInputRecord", "HoleDescriptor", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DTLSInputRecord$HoleDescriptor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DTLSInputRecord$HoleDescriptor",
	"java.lang.Object",
	nullptr,
	_DTLSInputRecord$HoleDescriptor_FieldInfo_,
	_DTLSInputRecord$HoleDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSInputRecord$HoleDescriptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSInputRecord"
};

$Object* allocate$DTLSInputRecord$HoleDescriptor($Class* clazz) {
	return $of($alloc(DTLSInputRecord$HoleDescriptor));
}

void DTLSInputRecord$HoleDescriptor::init$(int32_t offset, int32_t limit) {
	this->offset = offset;
	this->limit = limit;
}

DTLSInputRecord$HoleDescriptor::DTLSInputRecord$HoleDescriptor() {
}

$Class* DTLSInputRecord$HoleDescriptor::load$($String* name, bool initialize) {
	$loadClass(DTLSInputRecord$HoleDescriptor, name, initialize, &_DTLSInputRecord$HoleDescriptor_ClassInfo_, allocate$DTLSInputRecord$HoleDescriptor);
	return class$;
}

$Class* DTLSInputRecord$HoleDescriptor::class$ = nullptr;

		} // ssl
	} // security
} // sun