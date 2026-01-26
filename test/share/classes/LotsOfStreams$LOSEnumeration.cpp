#include <LotsOfStreams$LOSEnumeration.h>

#include <LotsOfStreams.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LotsOfStreams$LOSEnumeration_FieldInfo_[] = {
	{"inputStream", "Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $staticField(LotsOfStreams$LOSEnumeration, inputStream)},
	{"left", "I", nullptr, $PRIVATE, $field(LotsOfStreams$LOSEnumeration, left)},
	{}
};

$MethodInfo _LotsOfStreams$LOSEnumeration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LotsOfStreams$LOSEnumeration, init$, void)},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(LotsOfStreams$LOSEnumeration, hasMoreElements, bool)},
	{"nextElement", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(LotsOfStreams$LOSEnumeration, nextElement, $Object*)},
	{}
};

$InnerClassInfo _LotsOfStreams$LOSEnumeration_InnerClassesInfo_[] = {
	{"LotsOfStreams$LOSEnumeration", "LotsOfStreams", "LOSEnumeration", $STATIC},
	{}
};

$ClassInfo _LotsOfStreams$LOSEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"LotsOfStreams$LOSEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_LotsOfStreams$LOSEnumeration_FieldInfo_,
	_LotsOfStreams$LOSEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/io/InputStream;>;",
	nullptr,
	_LotsOfStreams$LOSEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LotsOfStreams"
};

$Object* allocate$LotsOfStreams$LOSEnumeration($Class* clazz) {
	return $of($alloc(LotsOfStreams$LOSEnumeration));
}

$InputStream* LotsOfStreams$LOSEnumeration::inputStream = nullptr;

void LotsOfStreams$LOSEnumeration::init$() {
	this->left = 32000;
}

bool LotsOfStreams$LOSEnumeration::hasMoreElements() {
	return (this->left > 0);
}

$Object* LotsOfStreams$LOSEnumeration::nextElement() {
	--this->left;
	return $of(LotsOfStreams$LOSEnumeration::inputStream);
}

void clinit$LotsOfStreams$LOSEnumeration($Class* class$) {
	$assignStatic(LotsOfStreams$LOSEnumeration::inputStream, $new($ByteArrayInputStream, $$new($bytes, 0)));
}

LotsOfStreams$LOSEnumeration::LotsOfStreams$LOSEnumeration() {
}

$Class* LotsOfStreams$LOSEnumeration::load$($String* name, bool initialize) {
	$loadClass(LotsOfStreams$LOSEnumeration, name, initialize, &_LotsOfStreams$LOSEnumeration_ClassInfo_, clinit$LotsOfStreams$LOSEnumeration, allocate$LotsOfStreams$LOSEnumeration);
	return class$;
}

$Class* LotsOfStreams$LOSEnumeration::class$ = nullptr;