#include <B8035158$TestCase$1.h>

#include <B8035158$TestCase.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

$FieldInfo _B8035158$TestCase$1_FieldInfo_[] = {
	{"val$proxyHost", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(B8035158$TestCase$1, val$proxyHost)},
	{"val$nonProxyHosts", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(B8035158$TestCase$1, val$nonProxyHosts)},
	{}
};

$MethodInfo _B8035158$TestCase$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(B8035158$TestCase$1::*)($String*,$String*)>(&B8035158$TestCase$1::init$))},
	{}
};

$EnclosingMethodInfo _B8035158$TestCase$1_EnclosingMethodInfo_ = {
	"B8035158$TestCase",
	"<init>",
	"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V"
};

$InnerClassInfo _B8035158$TestCase$1_InnerClassesInfo_[] = {
	{"B8035158$TestCase", "B8035158", "TestCase", $PRIVATE | $STATIC},
	{"B8035158$TestCase$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _B8035158$TestCase$1_ClassInfo_ = {
	$ACC_SUPER,
	"B8035158$TestCase$1",
	"java.util.HashMap",
	nullptr,
	_B8035158$TestCase$1_FieldInfo_,
	_B8035158$TestCase$1_MethodInfo_,
	"Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;",
	&_B8035158$TestCase$1_EnclosingMethodInfo_,
	_B8035158$TestCase$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B8035158"
};

$Object* allocate$B8035158$TestCase$1($Class* clazz) {
	return $of($alloc(B8035158$TestCase$1));
}

void B8035158$TestCase$1::init$($String* val$nonProxyHosts, $String* val$proxyHost) {
	$set(this, val$nonProxyHosts, val$nonProxyHosts);
	$set(this, val$proxyHost, val$proxyHost);
	$HashMap::init$();
	{
		put("http.nonProxyHosts"_s, this->val$nonProxyHosts);
		put("http.proxyHost"_s, this->val$proxyHost);
	}
}

B8035158$TestCase$1::B8035158$TestCase$1() {
}

$Class* B8035158$TestCase$1::load$($String* name, bool initialize) {
	$loadClass(B8035158$TestCase$1, name, initialize, &_B8035158$TestCase$1_ClassInfo_, allocate$B8035158$TestCase$1);
	return class$;
}

$Class* B8035158$TestCase$1::class$ = nullptr;