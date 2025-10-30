#include <jdk/internal/loader/URLClassPath$JarLoader$1.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/HashMap.h>
#include <java/util/jar/JarFile.h>
#include <jdk/internal/loader/URLClassPath$JarLoader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jdk/internal/util/jar/JarIndex.h>
#include <sun/net/util/URLUtil.h>
#include <jcpp.h>

#undef DEBUG

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $HashMap = ::java::util::HashMap;
using $JarFile = ::java::util::jar::JarFile;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$JarLoader = ::jdk::internal::loader::URLClassPath$JarLoader;
using $JarIndex = ::jdk::internal::util::jar::JarIndex;
using $URLUtil = ::sun::net::util::URLUtil;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$JarLoader$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath$JarLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$1, this$0)},
	{}
};

$MethodInfo _URLClassPath$JarLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath$JarLoader;)V", nullptr, 0, $method(static_cast<void(URLClassPath$JarLoader$1::*)($URLClassPath$JarLoader*)>(&URLClassPath$JarLoader$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _URLClassPath$JarLoader$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath$JarLoader",
	"ensureOpen",
	"()V"
};

$InnerClassInfo _URLClassPath$JarLoader$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$JarLoader", "jdk.internal.loader.URLClassPath", "JarLoader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$JarLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$JarLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$JarLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_URLClassPath$JarLoader$1_FieldInfo_,
	_URLClassPath$JarLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_URLClassPath$JarLoader$1_EnclosingMethodInfo_,
	_URLClassPath$JarLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$JarLoader$1($Class* clazz) {
	return $of($alloc(URLClassPath$JarLoader$1));
}

void URLClassPath$JarLoader$1::init$($URLClassPath$JarLoader* this$0) {
	$set(this, this$0, this$0);
}

$Object* URLClassPath$JarLoader$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($URLClassPath);
	if ($URLClassPath::DEBUG) {
		$nc($System::err)->println($$str({"Opening "_s, this->this$0->csu}));
		$Thread::dumpStack();
	}
	$set(this->this$0, jar, this->this$0->getJarFile(this->this$0->csu));
	$set(this->this$0, index, $JarIndex::getJarIndex(this->this$0->jar));
	if (this->this$0->index != nullptr) {
		$var($StringArray, jarfiles, $nc(this->this$0->index)->getJarFiles());
		for (int32_t i = 0; i < $nc(jarfiles)->length; ++i) {
			try {
				$var($URL, jarURL, $new($URL, this->this$0->csu, jarfiles->get(i)));
				$var($String, urlNoFragString, $URLUtil::urlNoFragString(jarURL));
				if (!$nc(this->this$0->lmap)->containsKey(urlNoFragString)) {
					$nc(this->this$0->lmap)->put(urlNoFragString, nullptr);
				}
			} catch ($MalformedURLException& e) {
				continue;
			}
		}
	}
	return $of(nullptr);
}

URLClassPath$JarLoader$1::URLClassPath$JarLoader$1() {
}

$Class* URLClassPath$JarLoader$1::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$JarLoader$1, name, initialize, &_URLClassPath$JarLoader$1_ClassInfo_, allocate$URLClassPath$JarLoader$1);
	return class$;
}

$Class* URLClassPath$JarLoader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk