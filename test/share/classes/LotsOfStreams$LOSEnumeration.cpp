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

$InputStream* LotsOfStreams$LOSEnumeration::inputStream = nullptr;

void LotsOfStreams$LOSEnumeration::init$() {
	this->left = 32000;
}

bool LotsOfStreams$LOSEnumeration::hasMoreElements() {
	return (this->left > 0);
}

$Object* LotsOfStreams$LOSEnumeration::nextElement() {
	--this->left;
	return LotsOfStreams$LOSEnumeration::inputStream;
}

void LotsOfStreams$LOSEnumeration::clinit$($Class* clazz) {
	$assignStatic(LotsOfStreams$LOSEnumeration::inputStream, $new($ByteArrayInputStream, $$new($bytes, 0)));
}

LotsOfStreams$LOSEnumeration::LotsOfStreams$LOSEnumeration() {
}

$Class* LotsOfStreams$LOSEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inputStream", "Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $staticField(LotsOfStreams$LOSEnumeration, inputStream)},
		{"left", "I", nullptr, $PRIVATE, $field(LotsOfStreams$LOSEnumeration, left)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LotsOfStreams$LOSEnumeration, init$, void)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(LotsOfStreams$LOSEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(LotsOfStreams$LOSEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LotsOfStreams$LOSEnumeration", "LotsOfStreams", "LOSEnumeration", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LotsOfStreams$LOSEnumeration",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/io/InputStream;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LotsOfStreams"
	};
	$loadClass(LotsOfStreams$LOSEnumeration, name, initialize, &classInfo$$, LotsOfStreams$LOSEnumeration::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LotsOfStreams$LOSEnumeration);
	});
	return class$;
}

$Class* LotsOfStreams$LOSEnumeration::class$ = nullptr;