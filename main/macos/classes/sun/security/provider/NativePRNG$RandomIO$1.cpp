#include <sun/security/provider/NativePRNG$RandomIO$1.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <sun/security/provider/NativePRNG$RandomIO.h>
#include <jcpp.h>

using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativePRNG$RandomIO = ::sun::security::provider::NativePRNG$RandomIO;

namespace sun {
	namespace security {
		namespace provider {

void NativePRNG$RandomIO$1::init$($NativePRNG$RandomIO* this$0) {
	$set(this, this$0, this$0);
}

$Object* NativePRNG$RandomIO$1::run() {
	try {
		return $of($new($FileOutputStream, this->this$0->seedFile, true));
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

NativePRNG$RandomIO$1::NativePRNG$RandomIO$1() {
}

$Class* NativePRNG$RandomIO$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $FINAL | $SYNTHETIC, $field(NativePRNG$RandomIO$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/NativePRNG$RandomIO;)V", nullptr, 0, $method(NativePRNG$RandomIO$1, init$, void, $NativePRNG$RandomIO*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(NativePRNG$RandomIO$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.NativePRNG$RandomIO",
		"implSetSeed",
		"([B)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$RandomIO", "sun.security.provider.NativePRNG", "RandomIO", $PRIVATE | $STATIC},
		{"sun.security.provider.NativePRNG$RandomIO$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.NativePRNG$RandomIO$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.NativePRNG"
	};
	$loadClass(NativePRNG$RandomIO$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativePRNG$RandomIO$1);
	});
	return class$;
}

$Class* NativePRNG$RandomIO$1::class$ = nullptr;

		} // provider
	} // security
} // sun