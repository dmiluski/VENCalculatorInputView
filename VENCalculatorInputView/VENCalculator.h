#import <Foundation/Foundation.h>

@interface VENCalculator : NSObject

/**
 * Evaluates a mathematical expression containing +, −, ×, and ÷.
 * @param expression The expression to evaluate
 * @return The evaluated expression. Returns nil if the expression is invalid.
 */
+ (NSString *)evaluateExpression:(NSString *)expression;

@end
