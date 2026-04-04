#include <java/util/regex/PrintPattern.h>
#include <java/io/Serializable.h>
#include <java/util/HashMap.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/CharPredicates.h>
#include <java/util/regex/Pattern$BackRef.h>
#include <java/util/regex/Pattern$BmpCharPredicate.h>
#include <java/util/regex/Pattern$Branch.h>
#include <java/util/regex/Pattern$BranchConn.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$CharProperty.h>
#include <java/util/regex/Pattern$CharPropertyGreedy.h>
#include <java/util/regex/Pattern$Curly.h>
#include <java/util/regex/Pattern$GroupCurly.h>
#include <java/util/regex/Pattern$GroupHead.h>
#include <java/util/regex/Pattern$GroupTail.h>
#include <java/util/regex/Pattern$LastNode.h>
#include <java/util/regex/Pattern$Loop.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$Prolog.h>
#include <java/util/regex/Pattern$Qtype.h>
#include <java/util/regex/Pattern$Ques.h>
#include <java/util/regex/Pattern$SliceNode.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef MAX_REPS

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $ASCII = ::java::util::regex::ASCII;
using $CharPredicates = ::java::util::regex::CharPredicates;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$BackRef = ::java::util::regex::Pattern$BackRef;
using $Pattern$Branch = ::java::util::regex::Pattern$Branch;
using $Pattern$BranchConn = ::java::util::regex::Pattern$BranchConn;
using $Pattern$CharProperty = ::java::util::regex::Pattern$CharProperty;
using $Pattern$CharPropertyGreedy = ::java::util::regex::Pattern$CharPropertyGreedy;
using $Pattern$Curly = ::java::util::regex::Pattern$Curly;
using $Pattern$GroupCurly = ::java::util::regex::Pattern$GroupCurly;
using $Pattern$GroupHead = ::java::util::regex::Pattern$GroupHead;
using $Pattern$GroupTail = ::java::util::regex::Pattern$GroupTail;
using $Pattern$LastNode = ::java::util::regex::Pattern$LastNode;
using $Pattern$Loop = ::java::util::regex::Pattern$Loop;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$Prolog = ::java::util::regex::Pattern$Prolog;
using $Pattern$Ques = ::java::util::regex::Pattern$Ques;
using $Pattern$SliceNode = ::java::util::regex::Pattern$SliceNode;

namespace java {
	namespace util {
		namespace regex {

$HashMap* PrintPattern::ids = nullptr;
$HashMap* PrintPattern::pmap = nullptr;

void PrintPattern::init$() {
}

void PrintPattern::print($Pattern$Node* node, $String* text, int32_t depth) {
	$init(PrintPattern);
	$useLocalObjectStack();
	if (!$nc(PrintPattern::ids)->containsKey(node)) {
		PrintPattern::ids->put(node, $($Integer::valueOf(PrintPattern::ids->size())));
	}
	$var($String, var$0, $str({"%6d:%"_s, (depth == 0 ? $cast($Serializable, ""_s) : $$cast($Serializable, $Integer::valueOf(depth << 1))), "s<%s>"_s}));
	$nc($System::out)->printf(var$0, $$new($ObjectArray, {
		$(PrintPattern::ids->get(node)),
		""_s,
		text
	}));
	if (PrintPattern::ids->containsKey($nc(node)->next)) {
		$nc($System::out)->printf(" (=>%d)"_s, $$new($ObjectArray, {$(PrintPattern::ids->get(node->next))}));
	}
	$nc($System::out)->printf("%n"_s, $$new($ObjectArray, 0));
}

void PrintPattern::print($String* s, int32_t depth) {
	$init(PrintPattern);
	$useLocalObjectStack();
	$nc($System::out)->printf($$str({"       %"_s, (depth == 0 ? $cast($Serializable, ""_s) : $$cast($Serializable, $Integer::valueOf(depth << 1))), "s<%s>%n"_s}), $$new($ObjectArray, {
		""_s,
		s
	}));
}

$String* PrintPattern::toStringCPS($ints* cps) {
	$init(PrintPattern);
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, $nc(cps)->length));
	{
		$var($ints, arr$, cps);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int32_t cp = arr$->get(i$);
			sb->append($(toStringCP(cp)));
		}
	}
	return sb->toString();
}

$String* PrintPattern::toStringCP(int32_t cp) {
	$init(PrintPattern);
	$useLocalObjectStack();
	return ($ASCII::isPrint(cp) ? $str({""_s, $$str((char16_t)cp)}) : $str({"\\u"_s, $($Integer::toString(cp, 16))}));
}

$String* PrintPattern::toStringRange(int32_t min, int32_t max) {
	$init(PrintPattern);
	$useLocalObjectStack();
	if (max == $Pattern::MAX_REPS) {
		if (min == 0) {
			return " * "_s;
		} else if (min == 1) {
			return " + "_s;
		}
		return $str({"{"_s, $$str(min), ", max}"_s});
	}
	return $str({"{"_s, $$str(min), ", "_s, $$str(max), "}"_s});
}

$String* PrintPattern::toStringCtype(int32_t type) {
	$init(PrintPattern);
	$var($String, var$0, nullptr);
	switch (type) {
	case 256:
		$assign(var$0, "ASCII.UPPER"_s);
		break;
	case 512:
		$assign(var$0, "ASCII.LOWER"_s);
		break;
	case 1024:
		$assign(var$0, "ASCII.DIGIT"_s);
		break;
	case 2048:
		$assign(var$0, "ASCII.SPACE"_s);
		break;
	case 4096:
		$assign(var$0, "ASCII.PUNCT"_s);
		break;
	case 8192:
		$assign(var$0, "ASCII.CNTRL"_s);
		break;
	case 16384:
		$assign(var$0, "ASCII.BLANK"_s);
		break;
	case 0x00010000:
		$assign(var$0, "ASCII.UNDER"_s);
		break;
	case 0x0000ff00:
		$assign(var$0, "ASCII.ASCII"_s);
		break;
	case 768:
		$assign(var$0, "ASCII.ALPHA"_s);
		break;
	case 1792:
		$assign(var$0, "ASCII.ALNUM"_s);
		break;
	case 5888:
		$assign(var$0, "ASCII.GRAPH"_s);
		break;
	case 0x00010700:
		$assign(var$0, "ASCII.WORD"_s);
		break;
	case 0x00008000:
		$assign(var$0, "ASCII.XDIGIT"_s);
		break;
	default:
		$assign(var$0, "ASCII ?"_s);
		break;
	}
	return var$0;
}

$String* PrintPattern::toString($Pattern$Node* node) {
	$init(PrintPattern);
	$var($String, name, $nc($of(node))->getClass()->getName());
	return $nc(name)->substring($nc(name)->lastIndexOf(u'$') + 1);
}

void PrintPattern::walk($Pattern$Node* node$renamed, int32_t depth) {
	$init(PrintPattern);
	$useLocalObjectStack();
	$var($Pattern$Node, node, node$renamed);
	++depth;
	while (node != nullptr) {
		$var($String, name, toString(node));
		$var($String, str, nullptr);
		{
			$var($Pattern$Curly, c, nullptr);
			$var($Pattern$GroupCurly, gc, nullptr);
			$var($Pattern$GroupHead, head, nullptr);
			$var($Pattern$Branch, b, nullptr);
			$var($Pattern$CharPropertyGreedy, gcp, nullptr);
			if ($instanceOf($Pattern$Prolog, node)) {
				print(node, name, depth);
				$var($Pattern$Loop, loop, $cast($Pattern$Prolog, node)->loop);
				$assign(name, toString(loop));
				$assign(str, $str({name, " "_s, $(toStringRange($nc(loop)->cmin, $nc(loop)->cmax))}));
				print(loop, str, depth);
				walk(loop->body, depth);
				print($$str({"/"_s, name}), depth);
				$assign(node, loop);
			} else if ($instanceOf($Pattern$Loop, node)) {
				return;
			} else {
				bool var$0 = $instanceOf($Pattern$Curly, node);
				if (var$0) {
					$assign(c, $cast($Pattern$Curly, node));
					var$0 = true;
				}
				if (var$0) {
					$var($StringBuilder, var$1, $new($StringBuilder));
					var$1->append("Curly "_s);
					var$1->append($nc(c)->type);
					var$1->append(" "_s);
					var$1->append($(toStringRange(c->cmin, c->cmax)));
					$assign(str, $str(var$1));
					print(node, str, depth);
					walk($nc(c)->atom, depth);
					print("/Curly"_s, depth);
				} else {
					bool var$2 = $instanceOf($Pattern$GroupCurly, node);
					if (var$2) {
						$assign(gc, $cast($Pattern$GroupCurly, node));
						var$2 = true;
					}
					if (var$2) {
						$var($StringBuilder, var$3, $new($StringBuilder));
						var$3->append("GroupCurly "_s);
						var$3->append($nc(gc)->groupIndex);
						var$3->append(2);
						var$3->append(", "_s);
						var$3->append(gc->type);
						var$3->append(" "_s);
						var$3->append($(toStringRange(gc->cmin, gc->cmax)));
						$assign(str, $str(var$3));
						print(node, str, depth);
						walk($nc(gc)->atom, depth);
						print("/GroupCurly"_s, depth);
					} else {
						bool var$4 = $instanceOf($Pattern$GroupHead, node);
						if (var$4) {
							$assign(head, $cast($Pattern$GroupHead, node));
							var$4 = true;
						}
						if (var$4) {
							$var($Pattern$GroupTail, tail, $nc(head)->tail);
							print(head, $$str({"Group.head "_s, $$str(($nc(tail)->groupIndex / 2))}), depth);
							walk(head->next, depth);
							print(tail, $$str({"/Group.tail "_s, $$str((tail->groupIndex / 2))}), depth);
							$assign(node, tail);
						} else if ($instanceOf($Pattern$GroupTail, node)) {
							return;
						} else if ($instanceOf($Pattern$Ques, node)) {
							print(node, $$str({"Ques "_s, $cast($Pattern$Ques, node)->type}), depth);
							walk($cast($Pattern$Ques, node)->atom, depth);
							print("/Ques"_s, depth);
						} else {
							bool var$5 = $instanceOf($Pattern$Branch, node);
							if (var$5) {
								$assign(b, $cast($Pattern$Branch, node));
								var$5 = true;
							}
							if (var$5) {
								print(b, name, depth);
								int32_t i = 0;
								while (true) {
									if ($nc($nc(b)->atoms)->get(i) != nullptr) {
										walk(b->atoms->get(i), depth);
									} else {
										print("  (accepted)"_s, depth);
									}
									if (++i == b->size) {
										break;
									}
									print("-branch.separator-"_s, depth);
								}
								$assign(node, $nc(b)->conn);
								print(node, "/Branch"_s, depth);
							} else if ($instanceOf($Pattern$BranchConn, node)) {
								return;
							} else if ($instanceOf($Pattern$CharProperty, node)) {
								$assign(str, $cast($String, $nc(PrintPattern::pmap)->get($cast($Pattern$CharProperty, node)->predicate)));
								if (str == nullptr) {
									$assign(str, toString(node));
								} else {
									$assign(str, $str({"Single \""_s, str, "\""_s}));
								}
								print(node, str, depth);
							} else if ($instanceOf($Pattern$SliceNode, node)) {
								$assign(str, $str({name, "  \""_s, $(toStringCPS($cast($Pattern$SliceNode, node)->buffer)), "\""_s}));
								print(node, str, depth);
							} else {
								bool var$6 = $instanceOf($Pattern$CharPropertyGreedy, node);
								if (var$6) {
									$assign(gcp, $cast($Pattern$CharPropertyGreedy, node));
									var$6 = true;
								}
								if (var$6) {
									$var($String, pstr, $cast($String, $nc(PrintPattern::pmap)->get($nc(gcp)->predicate)));
									if (pstr == nullptr) {
										$assign(pstr, $nc(gcp->predicate)->toString());
									} else {
										$assign(pstr, $str({"Single \""_s, pstr, "\""_s}));
									}
									$assign(str, $str({name, " "_s, pstr}));
									if (gcp->cmin == 0) {
										$plusAssign(str, "*"_s);
									} else if (gcp->cmin == 1) {
										$plusAssign(str, "+"_s);
									} else {
										$plusAssign(str, $$str({"{"_s, $$str(gcp->cmin), ",}"_s}));
									}
									print(node, str, depth);
								} else if ($instanceOf($Pattern$BackRef, node)) {
									$assign(str, $str({"GroupBackRef "_s, $$str($cast($Pattern$BackRef, node)->groupIndex / 2)}));
									print(node, str, depth);
								} else if ($instanceOf($Pattern$LastNode, node)) {
									print(node, "END"_s, depth);
								} else {
									$init($Pattern);
									if (node == $Pattern::accept$) {
										return;
									} else {
										print(node, name, depth);
									}
								}
							}
						}
					}
				}
			}
		}
		$assign(node, $nc(node)->next);
	}
}

void PrintPattern::main($StringArray* args) {
	$init(PrintPattern);
	$useLocalObjectStack();
	$var($Pattern, p, $Pattern::compile($nc(args)->get(0)));
	$nc($System::out)->println($$str({"   Pattern: "_s, p}));
	walk($nc(p)->root, 0);
}

void PrintPattern::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(PrintPattern::ids, $new($HashMap));
	{
		$assignStatic(PrintPattern::pmap, $new($HashMap));
		PrintPattern::pmap->put($($Pattern::ALL()), "All"_s);
		$nc(PrintPattern::pmap)->put($($Pattern::DOT()), "Dot"_s);
		$nc(PrintPattern::pmap)->put($($Pattern::UNIXDOT()), "UnixDot"_s);
		$nc(PrintPattern::pmap)->put($($Pattern::VertWS()), "VertWS"_s);
		$nc(PrintPattern::pmap)->put($($Pattern::HorizWS()), "HorizWS"_s);
		$nc(PrintPattern::pmap)->put($($CharPredicates::ASCII_DIGIT()), "ASCII.DIGIT"_s);
		$nc(PrintPattern::pmap)->put($($CharPredicates::ASCII_WORD()), "ASCII.WORD"_s);
		$nc(PrintPattern::pmap)->put($($CharPredicates::ASCII_SPACE()), "ASCII.SPACE"_s);
	}
}

PrintPattern::PrintPattern() {
}

$Class* PrintPattern::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ids", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/util/regex/Pattern$Node;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(PrintPattern, ids)},
		{"pmap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/util/regex/Pattern$CharPredicate;Ljava/lang/String;>;", $STATIC, $staticField(PrintPattern, pmap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrintPattern, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrintPattern, main, void, $StringArray*)},
		{"print", "(Ljava/util/regex/Pattern$Node;Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, print, void, $Pattern$Node*, $String*, int32_t)},
		{"print", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, print, void, $String*, int32_t)},
		{"toString", "(Ljava/util/regex/Pattern$Node;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, toString, $String*, $Pattern$Node*)},
		{"toStringCP", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, toStringCP, $String*, int32_t)},
		{"toStringCPS", "([I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, toStringCPS, $String*, $ints*)},
		{"toStringCtype", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, toStringCtype, $String*, int32_t)},
		{"toStringRange", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(PrintPattern, toStringRange, $String*, int32_t, int32_t)},
		{"walk", "(Ljava/util/regex/Pattern$Node;I)V", nullptr, $STATIC, $staticMethod(PrintPattern, walk, void, $Pattern$Node*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.PrintPattern",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintPattern, name, initialize, &classInfo$$, PrintPattern::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrintPattern);
	});
	return class$;
}

$Class* PrintPattern::class$ = nullptr;

		} // regex
	} // util
} // java