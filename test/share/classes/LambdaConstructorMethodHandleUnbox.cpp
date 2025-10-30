#include <LambdaConstructorMethodHandleUnbox.h>

#include <LambdaConstructorMethodHandleUnbox$IntFunction.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $LambdaConstructorMethodHandleUnbox$IntFunction = ::LambdaConstructorMethodHandleUnbox$IntFunction;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

class LambdaConstructorMethodHandleUnbox$$Lambda$Integer : public $LambdaConstructorMethodHandleUnbox$IntFunction {
	$class(LambdaConstructorMethodHandleUnbox$$Lambda$Integer, $NO_CLASS_INIT, $LambdaConstructorMethodHandleUnbox$IntFunction)
public:
	void init$() {
	}
	virtual int32_t m(Object$* arg0) override {
		 return $intValue($new($Integer, $cast($String, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaConstructorMethodHandleUnbox$$Lambda$Integer>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaConstructorMethodHandleUnbox$$Lambda$Integer::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConstructorMethodHandleUnbox$$Lambda$Integer::*)()>(&LambdaConstructorMethodHandleUnbox$$Lambda$Integer::init$))},
	{"m", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaConstructorMethodHandleUnbox$$Lambda$Integer::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaConstructorMethodHandleUnbox$$Lambda$Integer",
	"java.lang.Object",
	"LambdaConstructorMethodHandleUnbox$IntFunction",
	nullptr,
	methodInfos
};
$Class* LambdaConstructorMethodHandleUnbox$$Lambda$Integer::load$($String* name, bool initialize) {
	$loadClass(LambdaConstructorMethodHandleUnbox$$Lambda$Integer, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaConstructorMethodHandleUnbox$$Lambda$Integer::class$ = nullptr;

$MethodInfo _LambdaConstructorMethodHandleUnbox_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConstructorMethodHandleUnbox::*)()>(&LambdaConstructorMethodHandleUnbox::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LambdaConstructorMethodHandleUnbox::main))},
	{}
};

$InnerClassInfo _LambdaConstructorMethodHandleUnbox_InnerClassesInfo_[] = {
	{"LambdaConstructorMethodHandleUnbox$IntFunction", "LambdaConstructorMethodHandleUnbox", "IntFunction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaConstructorMethodHandleUnbox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LambdaConstructorMethodHandleUnbox",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LambdaConstructorMethodHandleUnbox_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaConstructorMethodHandleUnbox_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LambdaConstructorMethodHandleUnbox$IntFunction"
};

$Object* allocate$LambdaConstructorMethodHandleUnbox($Class* clazz) {
	return $of($alloc(LambdaConstructorMethodHandleUnbox));
}

void LambdaConstructorMethodHandleUnbox::init$() {
}

void LambdaConstructorMethodHandleUnbox::main($StringArray* args) {
	$var($LambdaConstructorMethodHandleUnbox$IntFunction, s, static_cast<$LambdaConstructorMethodHandleUnbox$IntFunction*>($new(LambdaConstructorMethodHandleUnbox$$Lambda$Integer)));
	int32_t var$0 = $nc(s)->m("2000"_s);
	if (var$0 + s->m("13"_s) != 2013) {
		$throwNew($RuntimeException, "Lambda conversion failure"_s);
	}
}

LambdaConstructorMethodHandleUnbox::LambdaConstructorMethodHandleUnbox() {
}

$Class* LambdaConstructorMethodHandleUnbox::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LambdaConstructorMethodHandleUnbox$$Lambda$Integer::classInfo$.name)) {
			return LambdaConstructorMethodHandleUnbox$$Lambda$Integer::load$(name, initialize);
		}
	}
	$loadClass(LambdaConstructorMethodHandleUnbox, name, initialize, &_LambdaConstructorMethodHandleUnbox_ClassInfo_, allocate$LambdaConstructorMethodHandleUnbox);
	return class$;
}

$Class* LambdaConstructorMethodHandleUnbox::class$ = nullptr;