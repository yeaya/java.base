#include <java/util/ResourceBundle$Control$2.h>

#include <java/io/InputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/ResourceBundle$Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$Control$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/ResourceBundle$Control;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, this$0)},
	{"val$reloadFlag", "Z", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, val$reloadFlag)},
	{"val$resourceName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, val$resourceName)},
	{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, val$loader)},
	{}
};

$MethodInfo _ResourceBundle$Control$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ResourceBundle$Control;Ljava/lang/ClassLoader;Ljava/lang/String;Z)V", nullptr, 0, $method(ResourceBundle$Control$2, init$, void, $ResourceBundle$Control*, $ClassLoader*, $String*, bool)},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$Control$2, run, $Object*), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _ResourceBundle$Control$2_EnclosingMethodInfo_ = {
	"java.util.ResourceBundle$Control",
	"newBundle0",
	"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;"
};

$InnerClassInfo _ResourceBundle$Control$2_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
	{"java.util.ResourceBundle$Control$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResourceBundle$Control$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$Control$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ResourceBundle$Control$2_FieldInfo_,
	_ResourceBundle$Control$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/InputStream;>;",
	&_ResourceBundle$Control$2_EnclosingMethodInfo_,
	_ResourceBundle$Control$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$Control$2($Class* clazz) {
	return $of($alloc(ResourceBundle$Control$2));
}

void ResourceBundle$Control$2::init$($ResourceBundle$Control* this$0, $ClassLoader* val$loader, $String* val$resourceName, bool val$reloadFlag) {
	$set(this, this$0, this$0);
	$set(this, val$loader, val$loader);
	$set(this, val$resourceName, val$resourceName);
	this->val$reloadFlag = val$reloadFlag;
}

$Object* ResourceBundle$Control$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $nc(this->val$loader)->getResource(this->val$resourceName));
	if (url == nullptr) {
		return $of(nullptr);
	}
	$var($URLConnection, connection, $nc(url)->openConnection());
	if (this->val$reloadFlag) {
		$nc(connection)->setUseCaches(false);
	}
	return $of($nc(connection)->getInputStream());
}

ResourceBundle$Control$2::ResourceBundle$Control$2() {
}

$Class* ResourceBundle$Control$2::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$Control$2, name, initialize, &_ResourceBundle$Control$2_ClassInfo_, allocate$ResourceBundle$Control$2);
	return class$;
}

$Class* ResourceBundle$Control$2::class$ = nullptr;

	} // util
} // java