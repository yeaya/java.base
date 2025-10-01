#include <java/net/URLConnection$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/FileNameMap.h>
#include <java/net/URLConnection.h>
#include <sun/net/www/MimeTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileNameMap = ::java::net::FileNameMap;
using $URLConnection = ::java::net::URLConnection;
using $MimeTable = ::sun::net::www::MimeTable;

namespace java {
	namespace net {

$FieldInfo _URLConnection$1_FieldInfo_[] = {
	{"internalMap", "Ljava/net/FileNameMap;", nullptr, $PRIVATE, $field(URLConnection$1, internalMap)},
	{}
};

$MethodInfo _URLConnection$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(URLConnection$1::*)()>(&URLConnection$1::init$))},
	{"getContentTypeFor", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLConnection$1_EnclosingMethodInfo_ = {
	"java.net.URLConnection",
	"getFileNameMap",
	"()Ljava/net/FileNameMap;"
};

$InnerClassInfo _URLConnection$1_InnerClassesInfo_[] = {
	{"java.net.URLConnection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLConnection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLConnection$1",
	"java.lang.Object",
	"java.net.FileNameMap",
	_URLConnection$1_FieldInfo_,
	_URLConnection$1_MethodInfo_,
	nullptr,
	&_URLConnection$1_EnclosingMethodInfo_,
	_URLConnection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLConnection"
};

$Object* allocate$URLConnection$1($Class* clazz) {
	return $of($alloc(URLConnection$1));
}

void URLConnection$1::init$() {
	$set(this, internalMap, $MimeTable::loadTable());
}

$String* URLConnection$1::getContentTypeFor($String* fileName) {
	return $nc(this->internalMap)->getContentTypeFor(fileName);
}

URLConnection$1::URLConnection$1() {
}

$Class* URLConnection$1::load$($String* name, bool initialize) {
	$loadClass(URLConnection$1, name, initialize, &_URLConnection$1_ClassInfo_, allocate$URLConnection$1);
	return class$;
}

$Class* URLConnection$1::class$ = nullptr;

	} // net
} // java