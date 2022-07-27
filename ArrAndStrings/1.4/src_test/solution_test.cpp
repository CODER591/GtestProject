/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"


//All cases which suppose to be true on return
TEST(IsPalindromePositive, civic) {
    EXPECT_EQ(true, palindrome_permutation(std::string("civic")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("civic")));
}

TEST(IsPalindromePositive, ivicc) {
    EXPECT_EQ(true, palindrome_permutation(std::string("ivicc")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("ivicc")));

}

TEST(IsPalindromePositive, tactcoa) {
    EXPECT_EQ(true, palindrome_permutation(std::string("tactcoa")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("tactcoa")));
}

TEST(IsPalindromePositive, tacocat) {
    EXPECT_EQ(true, palindrome_permutation(std::string("tacocat")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("tacocat")));
}

TEST(IsPalindromePositive, taco_cat) {
    EXPECT_EQ(true, palindrome_permutation(std::string("taco cat")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("taco cat")));
}

TEST(IsPalindromePositive, _t_a_c_o_c_a_t_) {
    EXPECT_EQ(true, palindrome_permutation(std::string(" t a c o c a t ")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string(" t a c o c a t ")));
}

TEST(IsPalindromePositive, tac_oc_at_) {
    EXPECT_EQ(true, palindrome_permutation(std::string("tac  oc at ")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("tac  oc at ")));
}

TEST(IsPalindromePositive, tac__oc_at_) {
    EXPECT_EQ(true, palindrome_permutation(std::string("tac  oc at ")));
    EXPECT_EQ(true, is_palindrome_permutation(std::string("tac  oc at ")));
}

TEST(IsPalindromePositive, aaa) {
   EXPECT_EQ(true, palindrome_permutation(std::string("aaa")));
   EXPECT_EQ(true, is_palindrome_permutation(std::string("aaa")));
}

TEST(IsPalindromePositive, alla) {
   EXPECT_EQ(true, palindrome_permutation(std::string("alla")));
   EXPECT_EQ(true, is_palindrome_permutation(std::string("alla")));
}

TEST(IsPalindromePositive, alma) {
   EXPECT_EQ(false, palindrome_permutation(std::string("alma")));
   EXPECT_EQ(false, is_palindrome_permutation(std::string("alma")));
}


TEST(IsPalindromePositive, random_input_1) {
  std::string input = "esbxyxkexzudempuqiohguwawkbfoyngvbvqxpdjrdfzfbrimnxpwzxkeofmvbwjnvgkyksomousoybkynahgjvhimwozlksnqwjbsioyrlejhlepxdhjvefnnddfaernteromeidkdwlbvhwjfyavmgdegcxmdnnpnhjavjkgiccenhyyqhxciqxnmocupwkknalfszxaqtmqepnvktfgpmgmdyejhatuqxohlyantyuurneymxfcoparuqudvutgnedwfgpsgupxrookcbwdordlzqviuyquqqnwldsfkhchodhicvyqshupobsrxienzskndtrlrrambguqqhkuzzusxmsjrcvlknvuhvkcrifypmkmyddsjbjbaarkiqxhkegqoixdnzqeqzobjhqtoihpfozijtuhtvusddyqaqkncgawsecnmmkyhkboxyyvujaohaimquilmvyuzuqderyykzlahpndzarojcldmvgwjdyoznzmjmbzmqwqcbrvhtiwnjeyfpaeekefmdmvvbwtcwmltgxuorjlypyxezfqfwwakhbbocmancdycprrjjkeviqngcbmsaovbuzduxxrzlvxtvesgeuswnkstrmxmcujlzctorpakexsnmkivnkeyxwlusypbdotyjiigryjupffhpxdjyvmefcogtsgbeoynxvnkvaqxpetvgoxtnbshapqwudwbzrxzjayeztpudfpddlvuhkevhjbgcamphjlswqhtzkwiqqxgspddflicbeokvmfhnooxgkqgxocfcdjtgafwozjxtdsscqoczeqkitplwuokaczelkezfqoqzulpevgjnsdtizdfayzsyujxkmyotppjdhepnoqaigfqljqioktxqkucxrawsltigfhdfuyxjzdlsmvatmcpysncqgtvasywagaglfujynkzoipmwtresankdnypsqmsynsirbkwzociiwubhgeayefyplmzvqscp";
  EXPECT_EQ(false, palindrome_permutation(input));
  EXPECT_EQ(false, is_palindrome_permutation(input));
}

TEST(IsPalindromePositive, random_input_2) {
  std::string input = "cdbkxqnqtsqtqcuskbhwhcxjguhunaqytfgzfpxmimxpnubdrhnopplimtgascleyvpegdacvnpsnaaphktvoqodsnpjxmmdryjitrpveyqbjynhhgekukhbzknprpmxrhzxvgyucenmurehmkjyhtrhpuvloingdcsgvngfeanubjcctupmmtikihwxdmfedzlqnjeujfqfphjuwqgnygnkzvhvhppelztlwmvuisfcnbjudqdmxaaoydggaowltyrmlntecmkfpdencllzgvbmfnndsfmuhvgzqamiggxpcvltwijtodzyuuntzczfzgjrwpbqqxccgyajvtjfapkllgrsibyhlysjagbkigwkvlllvkohfisxrkilhblwybqrbdhadxowhedqcmuqldaehtrzywnhvzuurvcumqnbtkygcpvfxkseahownqdhoblktpyvmuvvajieuakfhurmdvivxzcabvnczinlkwizwsuuugyhlrcecjxorieikhwuxvuyvoktgxtsovnphkmhaalmdjtlpmsizogkeaypvwuxfewbuxpgjjcuzpkmitbbbzjbwjhjybzandgxynjfkihvjnjnigakjyaavgvtutuvoqamiiexmmkqvfjtkifvnziprmubtwwozpktbjqfiygwhssefppplgblrtvlsrihkawfcuvkbyzxmqeihoualjizvfrhscsbabdnwqsnuzettueqlweeacpgywdhvefoggdpwnzselbbihqlbdljknbniwgiclxburspmbuvxxzhwoivsbizjztywmvarqdysgpfqhmmenjcqznoigunpdvzhhmkfqxfsngbcpdppgvihelawdftqtaynhoidkugjfwfeunonihhtjuohwhxnwzihnwloxzehprqsmymwamaxvtqtwhihireyrtleijeaprcwydecqkmkfkdnqgevtiucfbjldjfltfhrkfkvrnktuuzqvjqmjlu";
  EXPECT_EQ(false, palindrome_permutation(input));
  EXPECT_EQ(false, is_palindrome_permutation(input));
}

TEST(IsPalindromePositive, random_input_3) {
  std::string input = "imftpyltwwqzlnsagkawfmtepoqirqnmzhhhysmlyrqglxdjvxzwxrzjnbxqdycwaagjwwajvayvaowuksdweimbmfxywxwyuylzbzautuijzyjibfguhbihwurwqfvysbosamdwmunhubdnqncmxqpgyvkzbnoaswcsuvryanamcyyigpfjafhnrzgygyevyjyilpznoamjiqmnuxvwzkkwoijwfxuasipsetrmqwbnjycqhwyprpccyolivrfloofoaebulcwkmyeftrogqqftyuxnoygkaqharwuieugfmkzvxdluwwgxsudgmplnwpyecbbwkizwmyuhhmwdmrtriymhhwtqdqgvenonguqftusrdoqkaujwnzhtkzmqlfmzqwutchmlnjtmfisvimzzjimpllviogofyuxwcpgxfolwmigyqmxqkwjowpmkiajcocmiodeokjbttmqjryjjiagaevbjndbznqekjqlgreruqdveckrmilxzqvntwxonocofyarezvayucncszrtdphzhdhyryafolcakjnmfolmooiayvzqbfvpzbvfsofxocabqqzqvtlqjyuqiczatiluzhdmiqefffliiuuzrjwkpfshsfnomcyywgrkqstdqbzwdrjlscdrgrebralmiotarewakarvrvivcuqhztqzgmdkiuzdmvzynmusdfkpzhwbhdrmxkqwbujeyercvrrcaktxeolfeidfcbchicaqnvfspuebymahuncsewhhzicguqpwyurxzciernjiigkfgiysoqedbipquiyyqzqmakslcppdrzixeukvqsqosukcakmsckuqtrcraglqtjaqgyqbqduecqptzszkzepnsrhmduxolfiyvywwzvxkkdkfzkqbirpaiffdbxhwwaygnzhltskqlllchlhkmeyoadawzojudeovcdpzwghnmdqeeizrdoepxqwtrvyhudqfmkyuwsprifmm";
  EXPECT_EQ(true, palindrome_permutation(input));
  EXPECT_EQ(true, is_palindrome_permutation(input));
}

TEST(IsPalindromePositive, random_input_4) {
  std::string input = "sqezvgkgdlclzguaoejdjjebzmtmxucvpnjtlpbhoagkmdtvppskugaocuybxshemnxxgqubfdxqatygtiaojsuuplnjmgdoqweqlznfbcraajovzqzjsckfqqotujivjhrowacmlzteoypdiazckwpyksvwdjpsldvgiqajbqrcyfzlwhmxugeenaxdtgqfwdxvcogerxlsolguxbculygcdjyxibrgvyughpnsmwfugzlyjrbiwqbfrwhcukuoasgtkkwccjebjekyfaccntvhwlgicetuxyxbbnzjicauamappjzkljvhsplcpnkcxrvuvpcozntrmhakwyxlfpdqrfpjcsfxekdnpkeiytigizozbshkprsbxmxltckxpqedjjenpqoclokkzrnxmgjunyiabavgbimfcbwfkcjazokwtktjbwpvlsgkrgltxiugmjshqtbsqjgzjjujlkjxhkrgebntyllueohktxhwabgtdlixbmpijanjhkwilkrfdgoomgfkshkdpwknsavipohiucoqkqxnckgplipylqyenrtmkgvmtusnttthrflamcgtpaavxgpowhvyfsxkpqykqyykszojpgmotauewgrqmszirlkexdqixkrymjknqrackfktrglkqlaonzaathbargeongzdishxdndmqeouooqtinrnfpxccumxiljniumicmunnjvpvbaetbzsdvcrnkiuhjfegknbjppmbwkwqsoeflvmieviyoixoocxxdxclulyhrtinyqdiapmpgdmqnpxzcddenqugadsrpiggdwgnxofzgspalxquxhjwswomrboepxkivfmqcpohmhqmelwrqluzcavyevmxqxvdmkyyacoswjnjhtzdjqdclpxyvytafozuvgdryulbvxpoovywnzszbtuedjxlglvrzvdqmdmiagqobhdidchqlrfqhsfljhncnrvnoppkiuophogkvcjznrn";
  EXPECT_EQ(true, palindrome_permutation(input));
  EXPECT_EQ(true, is_palindrome_permutation(input));
}