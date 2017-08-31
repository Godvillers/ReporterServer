struct DuelLog {
    string host;
    string id;//\w{5,}
    int turn;
    string allies, map, log;//HTML.

    void process();
}

DuelLog duelLog(string link, int turn, string allies, string map, string log);
