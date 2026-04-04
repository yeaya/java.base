#include <sun/net/www/HeaderParser$ParserIterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/net/www/HeaderParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $HeaderParser = ::sun::net::www::HeaderParser;

namespace sun {
	namespace net {
		namespace www {

void HeaderParser$ParserIterator::init$($HeaderParser* this$0, bool returnValue) {
	$set(this, this$0, this$0);
	this->returnsValue = returnValue;
}

bool HeaderParser$ParserIterator::hasNext() {
	return this->index < this->this$0->nkeys;
}

$Object* HeaderParser$ParserIterator::next() {
	return $of($nc($nc(this->this$0->tab)->get(this->index++))->get(this->returnsValue ? 1 : 0));
}

void HeaderParser$ParserIterator::remove() {
	$throwNew($UnsupportedOperationException, "remove not supported"_s);
}

HeaderParser$ParserIterator::HeaderParser$ParserIterator() {
}

$Class* HeaderParser$ParserIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/HeaderParser;", nullptr, $FINAL | $SYNTHETIC, $field(HeaderParser$ParserIterator, this$0)},
		{"index", "I", nullptr, 0, $field(HeaderParser$ParserIterator, index)},
		{"returnsValue", "Z", nullptr, 0, $field(HeaderParser$ParserIterator, returnsValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/HeaderParser;Z)V", nullptr, 0, $method(HeaderParser$ParserIterator, init$, void, $HeaderParser*, bool)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(HeaderParser$ParserIterator, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser$ParserIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(HeaderParser$ParserIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.HeaderParser$ParserIterator", "sun.net.www.HeaderParser", "ParserIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.HeaderParser$ParserIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.HeaderParser"
	};
	$loadClass(HeaderParser$ParserIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeaderParser$ParserIterator);
	});
	return class$;
}

$Class* HeaderParser$ParserIterator::class$ = nullptr;

		} // www
	} // net
} // sun