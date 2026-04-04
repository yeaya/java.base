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

void ResourceBundle$Control$2::init$($ResourceBundle$Control* this$0, $ClassLoader* val$loader, $String* val$resourceName, bool val$reloadFlag) {
	$set(this, this$0, this$0);
	$set(this, val$loader, val$loader);
	$set(this, val$resourceName, val$resourceName);
	this->val$reloadFlag = val$reloadFlag;
}

$Object* ResourceBundle$Control$2::run() {
	$useLocalObjectStack();
	$var($URL, url, $nc(this->val$loader)->getResource(this->val$resourceName));
	if (url == nullptr) {
		return nullptr;
	}
	$var($URLConnection, connection, $nc(url)->openConnection());
	if (this->val$reloadFlag) {
		$nc(connection)->setUseCaches(false);
	}
	return $nc(connection)->getInputStream();
}

ResourceBundle$Control$2::ResourceBundle$Control$2() {
}

$Class* ResourceBundle$Control$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ResourceBundle$Control;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, this$0)},
		{"val$reloadFlag", "Z", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, val$reloadFlag)},
		{"val$resourceName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, val$resourceName)},
		{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$2, val$loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ResourceBundle$Control;Ljava/lang/ClassLoader;Ljava/lang/String;Z)V", nullptr, 0, $method(ResourceBundle$Control$2, init$, void, $ResourceBundle$Control*, $ClassLoader*, $String*, bool)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$Control$2, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ResourceBundle$Control",
		"newBundle0",
		"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
		{"java.util.ResourceBundle$Control$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$Control$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$Control$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$Control$2);
	});
	return class$;
}

$Class* ResourceBundle$Control$2::class$ = nullptr;

	} // util
} // java