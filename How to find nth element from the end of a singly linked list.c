Node getNodeFromTail(Node head, int x)
{
    Node p = head;
    Node q = head;

    int diff = 0;

    while (p.next != NULL)
    {
        p = p.next;

        if (diff >= x)
            q = q.next;
        else
            diff++;
    }
    return q;
}
