//#include <iostream>
//#include <stack>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//// Node structure for an expression tree
//struct Node {
//    string value;   // Stores value of node, either an integer or operator
//    Node* left;     // Pointer to left child
//    Node* right;    // Pointer to right child
//
//    // Constructor to initialize node with a value and null children
//    Node(string val) : value(val), left(nullptr), right(nullptr) {}
//};
//
//// Evaluates the expression tree recursively
//int evaluate(Node* root) {
//    try {
//        // If it's a leaf node, it must be an operand (integer), convert to integer
//        if (!root->left && !root->right) {
//            return stoi(root->value);
//        }
//        // Recursively evaluate left and right subtrees
//        int leftVal = evaluate(root->left);
//        int rightVal = evaluate(root->right);
//
//        // Perform the operation based on the root's operator
//        if (root->value == "+") return leftVal + rightVal;
//        if (root->value == "-") return leftVal - rightVal;
//        if (root->value == "*") return leftVal * rightVal;
//        if (root->value == "/") return leftVal / rightVal;
//    }
//    catch (const std::invalid_argument& e) {
//        // Handle the case where conversion of root->value to integer fails
//        cerr << "Invalid argument: " << root->value << endl;
//        exit(EXIT_FAILURE); // Exit if invalid input is found
//    }
//    return 0; // Should never reach here
//}
//
//// Function to build the expression tree from tokens
//Node* buildExpressionTree(stack<string>& tokens) {
//    if (tokens.empty()) return nullptr;
//
//    string val = tokens.top(); // Get the top token
//    tokens.pop(); // Remove the top token
//    Node* node = new Node(val); // Create a new node with the token
//
//    // If the token is an operator, it should have a left and right child
//    if (val == "+" || val == "-" || val == "*" || val == "/") {
//        // Important: we must construct right child first because the last token corresponds to the right child
//        node->right = buildExpressionTree(tokens);
//        node->left = buildExpressionTree(tokens);
//    }
//    return node; // Return the constructed node
//}
//
//int main() {
//    string expression = "(3+(2*5))"; // Example expression
//    stack<string> tokens; // Stack to hold the tokens of the expression
//    string num; // String to accumulate numbers
//
//    // Parse the expression from right to left
//    for (int i = static_cast<int>(expression.length()) - 1; i >= 0; --i) {
//        if (isdigit(expression[i])) {
//            // Accumulate digits into num (handle multi-digit numbers)
//            num = expression[i] + num;
//        }
//        else {
//            // Push accumulated number to stack if any
//            if (!num.empty()) {
//                tokens.push(num);
//                num = "";
//            }
//            // Push operator or parenthesis to stack
//            if (expression[i] == '(' || expression[i] == ')' ||
//                expression[i] == '+' || expression[i] == '-' ||
//                expression[i] == '*' || expression[i] == '/') {
//                tokens.push(string(1, expression[i]));
//            }
//        }
//    }
//
//    // If there's any number left unparsed
//    if (!num.empty()) tokens.push(num);
//
//    // Build the expression tree from the tokens
//    Node* root = buildExpressionTree(tokens);
//
//    // Evaluate the expression tree and output the result
//    cout << "Result: " << evaluate(root) << endl;
//    return 0;
//}
