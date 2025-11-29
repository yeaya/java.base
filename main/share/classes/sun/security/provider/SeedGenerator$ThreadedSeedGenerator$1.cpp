#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator$1.h>

#include <java/lang/Runnable.h>
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
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $SeedGenerator$ThreadedSeedGenerator = ::sun::security::provider::SeedGenerator$ThreadedSeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SeedGenerator$ThreadedSeedGenerator$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/SeedGenerator$ThreadedSeedGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$ThreadedSeedGenerator$1, this$0)},
	{"val$finalsg", "[Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$ThreadedSeedGenerator$1, val$finalsg)},
	{}
};

$MethodInfo _SeedGenerator$ThreadedSeedGenerator$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/SeedGenerator$ThreadedSeedGenerator;[Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(static_cast<void(SeedGenerator$ThreadedSeedGenerator$1::*)($SeedGenerator$ThreadedSeedGenerator*,$ThreadGroupArray*)>(&SeedGenerator$ThreadedSeedGenerator$1::init$))},
	{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SeedGenerator$ThreadedSeedGenerator$1_EnclosingMethodInfo_ = {
	"sun.security.provider.SeedGenerator$ThreadedSeedGenerator",
	"<init>",
	"()V"
};

$InnerClassInfo _SeedGenerator$ThreadedSeedGenerator$1_InnerClassesInfo_[] = {
	{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "sun.security.provider.SeedGenerator", "ThreadedSeedGenerator", $PRIVATE | $STATIC},
	{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SeedGenerator$ThreadedSeedGenerator$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SeedGenerator$ThreadedSeedGenerator$1_FieldInfo_,
	_SeedGenerator$ThreadedSeedGenerator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
	&_SeedGenerator$ThreadedSeedGenerator$1_EnclosingMethodInfo_,
	_SeedGenerator$ThreadedSeedGenerator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SeedGenerator"
};

$Object* allocate$SeedGenerator$ThreadedSeedGenerator$1($Class* clazz) {
	return $of($alloc(SeedGenerator$ThreadedSeedGenerator$1));
}

void SeedGenerator$ThreadedSeedGenerator$1::init$($SeedGenerator$ThreadedSeedGenerator* this$0, $ThreadGroupArray* val$finalsg) {
	$set(this, this$0, this$0);
	$set(this, val$finalsg, val$finalsg);
}

$Object* SeedGenerator$ThreadedSeedGenerator$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, parent, nullptr);
	$var($ThreadGroup, group, $($Thread::currentThread())->getThreadGroup());
	while (($assign(parent, $nc(group)->getParent())) != nullptr) {
		$assign(group, parent);
	}
	$nc(this->val$finalsg)->set(0, $$new($ThreadGroup, group, "SeedGenerator ThreadGroup"_s));
	$var($Thread, newT, $new($Thread, $nc(this->val$finalsg)->get(0), this->this$0, "SeedGenerator Thread"_s, 0, false));
	newT->setPriority($Thread::MIN_PRIORITY);
	newT->setDaemon(true);
	return $of(newT);
}

SeedGenerator$ThreadedSeedGenerator$1::SeedGenerator$ThreadedSeedGenerator$1() {
}

$Class* SeedGenerator$ThreadedSeedGenerator$1::load$($String* name, bool initialize) {
	$loadClass(SeedGenerator$ThreadedSeedGenerator$1, name, initialize, &_SeedGenerator$ThreadedSeedGenerator$1_ClassInfo_, allocate$SeedGenerator$ThreadedSeedGenerator$1);
	return class$;
}

$Class* SeedGenerator$ThreadedSeedGenerator$1::class$ = nullptr;

		} // provider
	} // security
} // sun