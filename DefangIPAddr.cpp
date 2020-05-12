class Solution {
public:
	string defangIPaddr(string address) {
		string newAddress = "";
		for (int i = 0; i < address.size(); ++i) {
			if (address[i] == '.') {
				newAddress += "[.]";
			}
			else {
				newAddress += address[i];
			}
		}
		return newAddress;
	}
};
