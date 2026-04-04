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
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

class DupIntf$$Lambda$lambda$main$0 : public $SAM, public $Other {
	$class(DupIntf$$Lambda$lambda$main$0, $NO_CLASS_INIT, $SAM, $Other)
public:
	void init$() {
	}
	virtual $Object* m() override {
		 return DupIntf::lambda$main$0();
	}
};
$Class* DupIntf$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DupIntf$$Lambda$lambda$main$0, init$, void)},
		{"m", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DupIntf$$Lambda$lambda$main$0, m, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DupIntf$$Lambda$lambda$main$0",
		"java.lang.Object",
		"SAM,Other",
		nullptr,
		methodInfos$$
	};
	$loadClass(DupIntf$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DupIntf$$Lambda$lambda$main$0));
	});
	return class$;
}
$Class* DupIntf$$Lambda$lambda$main$0::class$ = nullptr;

void DupIntf::init$() {
}

void DupIntf::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($SAM, sam, $cast($SAM, $cast($Other, $new(DupIntf$$Lambda$lambda$main$0))));
	$nc($System::out)->println($($nc(sam)->m()));
}

$Object* DupIntf::lambda$main$0() {
	return $of("Pass."_s);
}

DupIntf::DupIntf() {
}

$Class* DupIntf::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DupIntf$$Lambda$lambda$main$0")) {
			return DupIntf$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DupIntf, init$, void)},
		{"lambda$main$0", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DupIntf, lambda$main$0, $Object*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DupIntf, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DupIntf",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DupIntf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DupIntf);
	});
	return class$;
}

$Class* DupIntf::class$ = nullptr;