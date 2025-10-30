#include <DupIntf.h>

#include <Other.h>
#include <SAM.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $Other = ::Other;
using $SAM = ::SAM;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

class DupIntf$$Lambda$lambda$main$0 : public $SAM {
	$class(DupIntf$$Lambda$lambda$main$0, $NO_CLASS_INIT, $SAM)
public:
	void init$() {
	}
	virtual $Object* m() override {
		 return DupIntf::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DupIntf$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DupIntf$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DupIntf$$Lambda$lambda$main$0::*)()>(&DupIntf$$Lambda$lambda$main$0::init$))},
	{"m", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DupIntf$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DupIntf$$Lambda$lambda$main$0",
	"java.lang.Object",
	"SAM",
	nullptr,
	methodInfos
};
$Class* DupIntf$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(DupIntf$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DupIntf$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _DupIntf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DupIntf::*)()>(&DupIntf::init$))},
	{"lambda$main$0", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)()>(&DupIntf::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DupIntf::main))},
	{}
};

$ClassInfo _DupIntf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DupIntf",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DupIntf_MethodInfo_
};

$Object* allocate$DupIntf($Class* clazz) {
	return $of($alloc(DupIntf));
}

void DupIntf::init$() {
}

void DupIntf::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($SAM, sam, $cast($SAM, $cast($Other, static_cast<$SAM*>($new(DupIntf$$Lambda$lambda$main$0)))));
	$nc($System::out)->println($($nc(sam)->m()));
}

$Object* DupIntf::lambda$main$0() {
	return $of("Pass."_s);
}

DupIntf::DupIntf() {
}

$Class* DupIntf::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DupIntf$$Lambda$lambda$main$0::classInfo$.name)) {
			return DupIntf$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(DupIntf, name, initialize, &_DupIntf_ClassInfo_, allocate$DupIntf);
	return class$;
}

$Class* DupIntf::class$ = nullptr;