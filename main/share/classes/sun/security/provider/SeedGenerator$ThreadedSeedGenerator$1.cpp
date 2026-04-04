#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator$1.h>
#include <java/lang/ThreadGroup.h>
#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator.h>
#include <jcpp.h>

#undef MIN_PRIORITY

using $ThreadGroupArray = $Array<::java::lang::ThreadGroup>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $SeedGenerator$ThreadedSeedGenerator = ::sun::security::provider::SeedGenerator$ThreadedSeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

void SeedGenerator$ThreadedSeedGenerator$1::init$($SeedGenerator$ThreadedSeedGenerator* this$0, $ThreadGroupArray* val$finalsg) {
	$set(this, this$0, this$0);
	$set(this, val$finalsg, val$finalsg);
}

$Object* SeedGenerator$ThreadedSeedGenerator$1::run() {
	$useLocalObjectStack();
	$var($ThreadGroup, parent, nullptr);
	$var($ThreadGroup, group, $($Thread::currentThread())->getThreadGroup());
	while (($assign(parent, $nc(group)->getParent())) != nullptr) {
		$assign(group, parent);
	}
	$nc(this->val$finalsg)->set(0, $$new($ThreadGroup, group, "SeedGenerator ThreadGroup"_s));
	$var($Thread, newT, $new($Thread, this->val$finalsg->get(0), this->this$0, "SeedGenerator Thread"_s, 0, false));
	newT->setPriority($Thread::MIN_PRIORITY);
	newT->setDaemon(true);
	return newT;
}

SeedGenerator$ThreadedSeedGenerator$1::SeedGenerator$ThreadedSeedGenerator$1() {
}

$Class* SeedGenerator$ThreadedSeedGenerator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/SeedGenerator$ThreadedSeedGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$ThreadedSeedGenerator$1, this$0)},
		{"val$finalsg", "[Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$ThreadedSeedGenerator$1, val$finalsg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/SeedGenerator$ThreadedSeedGenerator;[Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(SeedGenerator$ThreadedSeedGenerator$1, init$, void, $SeedGenerator$ThreadedSeedGenerator*, $ThreadGroupArray*)},
		{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(SeedGenerator$ThreadedSeedGenerator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.SeedGenerator$ThreadedSeedGenerator",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "sun.security.provider.SeedGenerator", "ThreadedSeedGenerator", $PRIVATE | $STATIC},
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SeedGenerator"
	};
	$loadClass(SeedGenerator$ThreadedSeedGenerator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SeedGenerator$ThreadedSeedGenerator$1);
	});
	return class$;
}

$Class* SeedGenerator$ThreadedSeedGenerator$1::class$ = nullptr;

		} // provider
	} // security
} // sun