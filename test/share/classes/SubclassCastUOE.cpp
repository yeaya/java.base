#include <SubclassCastUOE.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;

$MethodInfo _SubclassCastUOE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SubclassCastUOE::*)()>(&SubclassCastUOE::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SubclassCastUOE::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SubclassCastUOE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SubclassCastUOE",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SubclassCastUOE_MethodInfo_
};

$Object* allocate$SubclassCastUOE($Class* clazz) {
	return $of($alloc(SubclassCastUOE));
}

void SubclassCastUOE::init$() {
}

void SubclassCastUOE::main($StringArray* args) {
	$var($ByteBuffer, buf, $ByteBuffer::allocateDirect(37));
	if (!($instanceOf($MappedByteBuffer, buf))) {
		$throwNew($RuntimeException, "Direct buffer not a MappedByteBuffer"_s);
	}
	if (!$equals($nc(($cast($MappedByteBuffer, buf)))->load(), buf)) {
		$throwNew($RuntimeException, "load() did not return same buffer"_s);
	}
	if (!$nc(($cast($MappedByteBuffer, buf)))->isLoaded()) {
		$throwNew($RuntimeException, "isLoaded() returned false"_s);
	}
	if (!$equals($nc(($cast($MappedByteBuffer, buf)))->force(), buf)) {
		$throwNew($RuntimeException, "force() did not return same buffer"_s);
	}
}

SubclassCastUOE::SubclassCastUOE() {
}

$Class* SubclassCastUOE::load$($String* name, bool initialize) {
	$loadClass(SubclassCastUOE, name, initialize, &_SubclassCastUOE_ClassInfo_, allocate$SubclassCastUOE);
	return class$;
}

$Class* SubclassCastUOE::class$ = nullptr;